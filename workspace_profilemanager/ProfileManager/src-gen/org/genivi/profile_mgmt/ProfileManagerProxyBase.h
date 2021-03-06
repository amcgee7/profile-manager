/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.201311151436.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef ORG_GENIVI_PROFILE_MGMT_Profile_Manager_PROXY_BASE_H_
#define ORG_GENIVI_PROFILE_MGMT_Profile_Manager_PROXY_BASE_H_

#include "ProfileManager.h"



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <vector>

#include <CommonAPI/Event.h>
#include <CommonAPI/SelectiveEvent.h>
#include <CommonAPI/Proxy.h>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace profile_mgmt {

class ProfileManagerProxyBase: virtual public CommonAPI::Proxy {
 public:
    typedef CommonAPI::SelectiveEvent<int32_t, int32_t, uint64_t> DetectedUserSelectiveEvent;
    typedef CommonAPI::SelectiveEvent<int32_t, int32_t, uint64_t> SynchronizedUserSelectiveEvent;
    typedef CommonAPI::SelectiveEvent<int32_t, uint64_t> StopSelectiveEvent;

    typedef std::function<void(const CommonAPI::CallStatus&)> RegisterMeAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> UnregisterMeAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> ConfirmAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> StoppedAsyncCallback;


    virtual DetectedUserSelectiveEvent& getDetectedUserSelectiveEvent() = 0;
    virtual SynchronizedUserSelectiveEvent& getSynchronizedUserSelectiveEvent() = 0;
    virtual StopSelectiveEvent& getStopSelectiveEvent() = 0;

    virtual void registerMe(const std::string& appID, const int32_t& seatID, CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> registerMeAsync(const std::string& appID, const int32_t& seatID, RegisterMeAsyncCallback callback) = 0;
    virtual void unregisterMe(const std::string& consumerAddress, const std::string& appID, const int32_t& seatID, CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> unregisterMeAsync(const std::string& consumerAddress, const std::string& appID, const int32_t& seatID, UnregisterMeAsyncCallback callback) = 0;
    virtual void confirm(const uint64_t& sessionID, CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> confirmAsync(const uint64_t& sessionID, ConfirmAsyncCallback callback) = 0;
    virtual void stopped(const uint64_t& sessionID, CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> stoppedAsync(const uint64_t& sessionID, StoppedAsyncCallback callback) = 0;
};

} // namespace profile_mgmt
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_PROFILE_MGMT_Profile_Manager_PROXY_BASE_H_
