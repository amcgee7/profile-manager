/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.201311151436.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef ORG_GENIVI_PROFILE_MGMT_Profile_Manager_STUB_H_
#define ORG_GENIVI_PROFILE_MGMT_Profile_Manager_STUB_H_




#include "ProfileManager.h"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <vector>

#include <CommonAPI/Stub.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace profile_mgmt {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service ProfileManager. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class ProfileManagerStubAdapter: virtual public CommonAPI::StubAdapter, public ProfileManager {
 public:

    /**
     * Sends a selective broadcast event for detectedUser. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireDetectedUserSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, const int32_t& seatID, const int32_t& userID, const uint64_t& sessionID) = 0;
    virtual void sendDetectedUserSelective(const int32_t& seatID, const int32_t& userID, const uint64_t& sessionID, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    virtual void subscribeFordetectedUserSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) = 0;
    virtual void unsubscribeFromdetectedUserSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForDetectedUserSelective() = 0;
    /**
     * Sends a selective broadcast event for synchronizedUser. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireSynchronizedUserSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, const int32_t& seatID, const int32_t& userID, const uint64_t& sessionID) = 0;
    virtual void sendSynchronizedUserSelective(const int32_t& seatID, const int32_t& userID, const uint64_t& sessionID, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    virtual void subscribeForsynchronizedUserSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) = 0;
    virtual void unsubscribeFromsynchronizedUserSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForSynchronizedUserSelective() = 0;
    /**
     * Sends a selective broadcast event for stop. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireStopSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, const int32_t& seatID, const uint64_t& sessionID) = 0;
    virtual void sendStopSelective(const int32_t& seatID, const uint64_t& sessionID, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    virtual void subscribeForstopSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) = 0;
    virtual void unsubscribeFromstopSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForStopSelective() = 0;
    
    
    virtual void deactivateManagedInstances() = 0;
    
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
    std::shared_ptr<CommonAPI::ClientIdList> subscribersForDetectedUserSelective_;
    std::shared_ptr<CommonAPI::ClientIdList> subscribersForSynchronizedUserSelective_;
    std::shared_ptr<CommonAPI::ClientIdList> subscribersForStopSelective_;
};


/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for ProfileManager.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class ProfileManagerStubRemoteEvent {
 public:
    virtual ~ProfileManagerStubRemoteEvent() { }

};


/**
 * Defines the interface that must be implemented by any class that should provide
 * the service ProfileManager to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class ProfileManagerStub : public CommonAPI::Stub<ProfileManagerStubAdapter , ProfileManagerStubRemoteEvent> {
 public:
    virtual ~ProfileManagerStub() { }


    /// This is the method that will be called on remote calls on the method registerMe.
    virtual void registerMe(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string appID, int32_t seatID) = 0;
    /// This is the method that will be called on remote calls on the method unregisterMe.
    virtual void unregisterMe(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string consumerAddress, std::string appID, int32_t seatID) = 0;
    /// This is the method that will be called on remote calls on the method confirm.
    virtual void confirm(const std::shared_ptr<CommonAPI::ClientId> clientId, uint64_t sessionID) = 0;
    /// This is the method that will be called on remote calls on the method stopped.
    virtual void stopped(const std::shared_ptr<CommonAPI::ClientId> clientId, uint64_t sessionID) = 0;
    /**
     * Sends a selective broadcast event for detectedUser to the given ClientIds.
     * The ClientIds must all be out of the set of subscribed clients.
     * If no ClientIds are given, the selective broadcast is sent to all subscribed clients.
     */
    virtual void fireDetectedUserSelective(const int32_t& seatID, const int32_t& userID, const uint64_t& sessionID, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    /// retreives the list of all subscribed clients for detectedUser
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForDetectedUserSelective() = 0;
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onDetectedUserSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event) = 0;
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onDetectedUserSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Sends a selective broadcast event for synchronizedUser to the given ClientIds.
     * The ClientIds must all be out of the set of subscribed clients.
     * If no ClientIds are given, the selective broadcast is sent to all subscribed clients.
     */
    virtual void fireSynchronizedUserSelective(const int32_t& seatID, const int32_t& userID, const uint64_t& sessionID, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    /// retreives the list of all subscribed clients for synchronizedUser
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForSynchronizedUserSelective() = 0;
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onSynchronizedUserSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event) = 0;
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onSynchronizedUserSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Sends a selective broadcast event for stop to the given ClientIds.
     * The ClientIds must all be out of the set of subscribed clients.
     * If no ClientIds are given, the selective broadcast is sent to all subscribed clients.
     */
    virtual void fireStopSelective(const int32_t& seatID, const uint64_t& sessionID, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    /// retreives the list of all subscribed clients for stop
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForStopSelective() = 0;
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onStopSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event) = 0;
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onStopSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    
};

} // namespace profile_mgmt
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_PROFILE_MGMT_Profile_Manager_STUB_H_
