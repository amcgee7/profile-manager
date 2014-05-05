/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.201311151436.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef ORG_GENIVI_PROFILE_MGMT_CTRL_Profile_Manager_Ctrl_STUB_H_
#define ORG_GENIVI_PROFILE_MGMT_CTRL_Profile_Manager_Ctrl_STUB_H_




#include "ProfileManagerCtrl.h"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.h>
#include <CommonAPI/OutputStream.h>
#include <cstdint>
#include <vector>

#include <CommonAPI/Stub.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace profile_mgmt_ctrl {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service ProfileManagerCtrl. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class ProfileManagerCtrlStubAdapter: virtual public CommonAPI::StubAdapter, public ProfileManagerCtrl {
 public:

    /**
     * Sends a selective broadcast event for onTimeOut. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireOnTimeOutSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, const std::string& appName, const uint32_t& userId, const uint32_t& seatId, const ProfileManagerCtrl::ESignal& s, const uint64_t& sessionId, const int32_t& timeElapsedMs, const uint64_t& timeOutSessionId) = 0;
    virtual void sendOnTimeOutSelective(const std::string& appName, const uint32_t& userId, const uint32_t& seatId, const ProfileManagerCtrl::ESignal& s, const uint64_t& sessionId, const int32_t& timeElapsedMs, const uint64_t& timeOutSessionId, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    virtual void subscribeForonTimeOutSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) = 0;
    virtual void unsubscribeFromonTimeOutSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForOnTimeOutSelective() = 0;
    /**
     * Sends a selective broadcast event for onStateChangeStart. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireOnStateChangeStartSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, const uint32_t& userId, const uint32_t& seatId, const int32_t& depLevel, const ProfileManagerCtrl::ESignal& s, const uint64_t& sessionId) = 0;
    virtual void sendOnStateChangeStartSelective(const uint32_t& userId, const uint32_t& seatId, const int32_t& depLevel, const ProfileManagerCtrl::ESignal& s, const uint64_t& sessionId, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    virtual void subscribeForonStateChangeStartSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) = 0;
    virtual void unsubscribeFromonStateChangeStartSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForOnStateChangeStartSelective() = 0;
    /**
     * Sends a selective broadcast event for onStateChangeStop. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireOnStateChangeStopSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, const uint32_t& userId, const uint32_t& seatId, const int32_t& depLevel, const ProfileManagerCtrl::ESignal& s, const uint64_t& sessionId) = 0;
    virtual void sendOnStateChangeStopSelective(const uint32_t& userId, const uint32_t& seatId, const int32_t& depLevel, const ProfileManagerCtrl::ESignal& s, const uint64_t& sessionId, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    virtual void subscribeForonStateChangeStopSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) = 0;
    virtual void unsubscribeFromonStateChangeStopSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForOnStateChangeStopSelective() = 0;
    /**
     * Sends a selective broadcast event for onClientRegister. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireOnClientRegisterSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, const std::string& appName, const uint32_t& seatId) = 0;
    virtual void sendOnClientRegisterSelective(const std::string& appName, const uint32_t& seatId, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    virtual void subscribeForonClientRegisterSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) = 0;
    virtual void unsubscribeFromonClientRegisterSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForOnClientRegisterSelective() = 0;
    /**
     * Sends a selective broadcast event for onClientUnregister. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireOnClientUnregisterSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, const std::string& appName, const uint32_t& seatId) = 0;
    virtual void sendOnClientUnregisterSelective(const std::string& appName, const uint32_t& seatId, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    virtual void subscribeForonClientUnregisterSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) = 0;
    virtual void unsubscribeFromonClientUnregisterSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForOnClientUnregisterSelective() = 0;
    
    
    virtual void deactivateManagedInstances() = 0;
    
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
    std::shared_ptr<CommonAPI::ClientIdList> subscribersForOnTimeOutSelective_;
    std::shared_ptr<CommonAPI::ClientIdList> subscribersForOnStateChangeStartSelective_;
    std::shared_ptr<CommonAPI::ClientIdList> subscribersForOnStateChangeStopSelective_;
    std::shared_ptr<CommonAPI::ClientIdList> subscribersForOnClientRegisterSelective_;
    std::shared_ptr<CommonAPI::ClientIdList> subscribersForOnClientUnregisterSelective_;
};


/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for ProfileManagerCtrl.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class ProfileManagerCtrlStubRemoteEvent {
 public:
    virtual ~ProfileManagerCtrlStubRemoteEvent() { }

};


/**
 * Defines the interface that must be implemented by any class that should provide
 * the service ProfileManagerCtrl to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class ProfileManagerCtrlStub : public CommonAPI::Stub<ProfileManagerCtrlStubAdapter , ProfileManagerCtrlStubRemoteEvent> {
 public:
    virtual ~ProfileManagerCtrlStub() { }


    /// This is the method that will be called on remote calls on the method registerMe.
    virtual void registerMe(const std::shared_ptr<CommonAPI::ClientId> clientId, bool registerOnTimeOut, bool registerOnStateChangeStart, bool registerOnStateChangeStop, bool registerOnClientRegister, bool registerOnClientUnregister) = 0;
    /// This is the method that will be called on remote calls on the method setUser.
    virtual void setUser(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t userId, uint32_t seatId) = 0;
    /// This is the method that will be called on remote calls on the method unsetUser.
    virtual void unsetUser(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t seatId) = 0;
    /// This is the method that will be called on remote calls on the method timeOutAction.
    virtual void timeOutAction(const std::shared_ptr<CommonAPI::ClientId> clientId, uint64_t timeOutSessionId, ProfileManagerCtrl::ETimeOutAction timeOutActionItem) = 0;
    /**
     * Sends a selective broadcast event for onTimeOut to the given ClientIds.
     * The ClientIds must all be out of the set of subscribed clients.
     * If no ClientIds are given, the selective broadcast is sent to all subscribed clients.
     */
    virtual void fireOnTimeOutSelective(const std::string& appName, const uint32_t& userId, const uint32_t& seatId, const ProfileManagerCtrl::ESignal& s, const uint64_t& sessionId, const int32_t& timeElapsedMs, const uint64_t& timeOutSessionId, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    /// retreives the list of all subscribed clients for onTimeOut
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForOnTimeOutSelective() = 0;
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onOnTimeOutSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event) = 0;
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onOnTimeOutSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Sends a selective broadcast event for onStateChangeStart to the given ClientIds.
     * The ClientIds must all be out of the set of subscribed clients.
     * If no ClientIds are given, the selective broadcast is sent to all subscribed clients.
     */
    virtual void fireOnStateChangeStartSelective(const uint32_t& userId, const uint32_t& seatId, const int32_t& depLevel, const ProfileManagerCtrl::ESignal& s, const uint64_t& sessionId, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    /// retreives the list of all subscribed clients for onStateChangeStart
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForOnStateChangeStartSelective() = 0;
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onOnStateChangeStartSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event) = 0;
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onOnStateChangeStartSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Sends a selective broadcast event for onStateChangeStop to the given ClientIds.
     * The ClientIds must all be out of the set of subscribed clients.
     * If no ClientIds are given, the selective broadcast is sent to all subscribed clients.
     */
    virtual void fireOnStateChangeStopSelective(const uint32_t& userId, const uint32_t& seatId, const int32_t& depLevel, const ProfileManagerCtrl::ESignal& s, const uint64_t& sessionId, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    /// retreives the list of all subscribed clients for onStateChangeStop
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForOnStateChangeStopSelective() = 0;
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onOnStateChangeStopSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event) = 0;
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onOnStateChangeStopSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Sends a selective broadcast event for onClientRegister to the given ClientIds.
     * The ClientIds must all be out of the set of subscribed clients.
     * If no ClientIds are given, the selective broadcast is sent to all subscribed clients.
     */
    virtual void fireOnClientRegisterSelective(const std::string& appName, const uint32_t& seatId, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    /// retreives the list of all subscribed clients for onClientRegister
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForOnClientRegisterSelective() = 0;
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onOnClientRegisterSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event) = 0;
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onOnClientRegisterSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Sends a selective broadcast event for onClientUnregister to the given ClientIds.
     * The ClientIds must all be out of the set of subscribed clients.
     * If no ClientIds are given, the selective broadcast is sent to all subscribed clients.
     */
    virtual void fireOnClientUnregisterSelective(const std::string& appName, const uint32_t& seatId, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL) = 0;
    /// retreives the list of all subscribed clients for onClientUnregister
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForOnClientUnregisterSelective() = 0;
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onOnClientUnregisterSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event) = 0;
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onOnClientUnregisterSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    
};

} // namespace profile_mgmt_ctrl
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_PROFILE_MGMT_CTRL_Profile_Manager_Ctrl_STUB_H_
