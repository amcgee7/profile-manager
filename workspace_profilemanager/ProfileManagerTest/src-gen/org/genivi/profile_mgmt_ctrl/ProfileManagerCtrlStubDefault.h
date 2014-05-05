/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.201311151436.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef ORG_GENIVI_PROFILE_MGMT_CTRL_Profile_Manager_Ctrl_STUB_DEFAULT_H_
#define ORG_GENIVI_PROFILE_MGMT_CTRL_Profile_Manager_Ctrl_STUB_DEFAULT_H_

#include <org/genivi/profile_mgmt_ctrl/ProfileManagerCtrlStub.h>
#include <sstream>

namespace org {
namespace genivi {
namespace profile_mgmt_ctrl {

/**
 * Provides a default implementation for ProfileManagerCtrlStubRemoteEvent and
 * ProfileManagerCtrlStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class ProfileManagerCtrlStubDefault : public ProfileManagerCtrlStub {
 public:
    ProfileManagerCtrlStubDefault();

    ProfileManagerCtrlStubRemoteEvent* initStubAdapter(const std::shared_ptr<ProfileManagerCtrlStubAdapter>& stubAdapter);


    virtual void registerMe(const std::shared_ptr<CommonAPI::ClientId> clientId, bool registerOnTimeOut, bool registerOnStateChangeStart, bool registerOnStateChangeStop, bool registerOnClientRegister, bool registerOnClientUnregister);
    virtual void registerMe(bool registerOnTimeOut, bool registerOnStateChangeStart, bool registerOnStateChangeStop, bool registerOnClientRegister, bool registerOnClientUnregister);

    virtual void setUser(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t userId, uint32_t seatId);
    virtual void setUser(uint32_t userId, uint32_t seatId);

    virtual void unsetUser(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t seatId);
    virtual void unsetUser(uint32_t seatId);

    virtual void timeOutAction(const std::shared_ptr<CommonAPI::ClientId> clientId, uint64_t timeOutSessionId, ProfileManagerCtrl::ETimeOutAction timeOutActionItem);
    virtual void timeOutAction(uint64_t timeOutSessionId, ProfileManagerCtrl::ETimeOutAction timeOutActionItem);


    virtual void fireOnTimeOutSelective(const std::string& appName, const uint32_t& userId, const uint32_t& seatId, const ProfileManagerCtrl::ESignal& s, const uint64_t& sessionId, const int32_t& timeElapsedMs, const uint64_t& timeOutSessionId, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL);
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForOnTimeOutSelective();
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onOnTimeOutSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event);
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onOnTimeOutSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void fireOnStateChangeStartSelective(const uint32_t& userId, const uint32_t& seatId, const int32_t& depLevel, const ProfileManagerCtrl::ESignal& s, const uint64_t& sessionId, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL);
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForOnStateChangeStartSelective();
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onOnStateChangeStartSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event);
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onOnStateChangeStartSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void fireOnStateChangeStopSelective(const uint32_t& userId, const uint32_t& seatId, const int32_t& depLevel, const ProfileManagerCtrl::ESignal& s, const uint64_t& sessionId, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL);
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForOnStateChangeStopSelective();
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onOnStateChangeStopSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event);
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onOnStateChangeStopSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void fireOnClientRegisterSelective(const std::string& appName, const uint32_t& seatId, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL);
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForOnClientRegisterSelective();
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onOnClientRegisterSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event);
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onOnClientRegisterSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void fireOnClientUnregisterSelective(const std::string& appName, const uint32_t& seatId, const std::shared_ptr<CommonAPI::ClientIdList> receivers = NULL);
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForOnClientUnregisterSelective();
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onOnClientUnregisterSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> clientId, const CommonAPI::SelectiveBroadcastSubscriptionEvent event);
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onOnClientUnregisterSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> clientId);
    

 protected:
    std::shared_ptr<ProfileManagerCtrlStubAdapter> stubAdapter_;
 private:
    class RemoteEventHandler: public ProfileManagerCtrlStubRemoteEvent {
     public:
        RemoteEventHandler(ProfileManagerCtrlStubDefault* defaultStub);


     private:
        ProfileManagerCtrlStubDefault* defaultStub_;
    };

    RemoteEventHandler remoteEventHandler_;

};

} // namespace profile_mgmt_ctrl
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_PROFILE_MGMT_CTRL_Profile_Manager_Ctrl_STUB_DEFAULT_H_
