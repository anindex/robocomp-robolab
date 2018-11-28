// **********************************************************************
//
// Copyright (c) 2003-2017 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.7.0
//
// <auto-generated>
//
// Generated from file `RGBDBus.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <RGBDBus.h>
#include <IceUtil/PushDisableWarnings.h>
#include <Ice/LocalException.h>
#include <Ice/ValueFactory.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/InputStream.h>
#include <Ice/OutputStream.h>
#include <Ice/LocalException.h>
#include <IceUtil/PopDisableWarnings.h>

#if defined(_MSC_VER)
#   pragma warning(disable:4458) // declaration of ... hides class member
#elif defined(__clang__)
#   pragma clang diagnostic ignored "-Wshadow"
#elif defined(__GNUC__)
#   pragma GCC diagnostic ignored "-Wshadow"
#endif

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 307
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 0
#       error Ice patch level mismatch!
#   endif
#endif

#ifdef ICE_CPP11_MAPPING // C++11 mapping

namespace
{

const ::IceInternal::DefaultUserExceptionFactoryInit<::RoboCompRGBDBus::HardwareFailedException> iceC_RoboCompRGBDBus_HardwareFailedException_init("::RoboCompRGBDBus::HardwareFailedException");

const ::std::string iceC_RoboCompRGBDBus_RGBDBus_ids[2] =
{
    "::Ice::Object",
    "::RoboCompRGBDBus::RGBDBus"
};
const ::std::string iceC_RoboCompRGBDBus_RGBDBus_ops[] =
{
    "getAllCameraParams",
    "getDecimatedImages",
    "getImages",
    "getPointClouds",
    "getProtoClouds",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};
const ::std::string iceC_RoboCompRGBDBus_RGBDBus_getAllCameraParams_name = "getAllCameraParams";
const ::std::string iceC_RoboCompRGBDBus_RGBDBus_getImages_name = "getImages";
const ::std::string iceC_RoboCompRGBDBus_RGBDBus_getPointClouds_name = "getPointClouds";
const ::std::string iceC_RoboCompRGBDBus_RGBDBus_getProtoClouds_name = "getProtoClouds";
const ::std::string iceC_RoboCompRGBDBus_RGBDBus_getDecimatedImages_name = "getDecimatedImages";

}

RoboCompRGBDBus::HardwareFailedException::~HardwareFailedException()
{
}

const ::std::string&
RoboCompRGBDBus::HardwareFailedException::ice_staticId()
{
    static const ::std::string typeId = "::RoboCompRGBDBus::HardwareFailedException";
    return typeId;
}

bool
RoboCompRGBDBus::RGBDBus::ice_isA(::std::string s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_RoboCompRGBDBus_RGBDBus_ids, iceC_RoboCompRGBDBus_RGBDBus_ids + 2, s);
}

::std::vector<::std::string>
RoboCompRGBDBus::RGBDBus::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector<::std::string>(&iceC_RoboCompRGBDBus_RGBDBus_ids[0], &iceC_RoboCompRGBDBus_RGBDBus_ids[2]);
}

::std::string
RoboCompRGBDBus::RGBDBus::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
RoboCompRGBDBus::RGBDBus::ice_staticId()
{
    static const ::std::string typeId = "::RoboCompRGBDBus::RGBDBus";
    return typeId;
}

bool
RoboCompRGBDBus::RGBDBus::_iceD_getAllCameraParams(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Idempotent, current.mode);
    inS.readEmptyParams();
    ::RoboCompRGBDBus::CameraParamsMap ret = this->getAllCameraParams(current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(ret);
    inS.endWriteParams();
    return true;
}

bool
RoboCompRGBDBus::RGBDBus::_iceD_getImages(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Idempotent, current.mode);
    auto istr = inS.startReadParams();
    ::RoboCompRGBDBus::CameraList iceP_cameras;
    istr->readAll(iceP_cameras);
    inS.endReadParams();
    ::RoboCompRGBDBus::ImageMap iceP_images;
    this->getImages(::std::move(iceP_cameras), iceP_images, current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(iceP_images);
    inS.endWriteParams();
    return true;
}

bool
RoboCompRGBDBus::RGBDBus::_iceD_getPointClouds(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Idempotent, current.mode);
    auto istr = inS.startReadParams();
    ::RoboCompRGBDBus::CameraList iceP_cameras;
    istr->readAll(iceP_cameras);
    inS.endReadParams();
    ::RoboCompRGBDBus::PointCloudMap iceP_clouds;
    this->getPointClouds(::std::move(iceP_cameras), iceP_clouds, current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(iceP_clouds);
    inS.endWriteParams();
    return true;
}

bool
RoboCompRGBDBus::RGBDBus::_iceD_getProtoClouds(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Idempotent, current.mode);
    auto istr = inS.startReadParams();
    ::RoboCompRGBDBus::CameraList iceP_cameras;
    istr->readAll(iceP_cameras);
    inS.endReadParams();
    ::RoboCompRGBDBus::PointCloudMap iceP_protoClouds;
    this->getProtoClouds(::std::move(iceP_cameras), iceP_protoClouds, current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(iceP_protoClouds);
    inS.endWriteParams();
    return true;
}

bool
RoboCompRGBDBus::RGBDBus::_iceD_getDecimatedImages(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Idempotent, current.mode);
    auto istr = inS.startReadParams();
    ::RoboCompRGBDBus::CameraList iceP_cameras;
    int iceP_decimation;
    istr->readAll(iceP_cameras, iceP_decimation);
    inS.endReadParams();
    ::RoboCompRGBDBus::ImageMap iceP_images;
    this->getDecimatedImages(::std::move(iceP_cameras), iceP_decimation, iceP_images, current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(iceP_images);
    inS.endWriteParams();
    return true;
}

bool
RoboCompRGBDBus::RGBDBus::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_RoboCompRGBDBus_RGBDBus_ops, iceC_RoboCompRGBDBus_RGBDBus_ops + 9, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_RoboCompRGBDBus_RGBDBus_ops)
    {
        case 0:
        {
            return _iceD_getAllCameraParams(in, current);
        }
        case 1:
        {
            return _iceD_getDecimatedImages(in, current);
        }
        case 2:
        {
            return _iceD_getImages(in, current);
        }
        case 3:
        {
            return _iceD_getPointClouds(in, current);
        }
        case 4:
        {
            return _iceD_getProtoClouds(in, current);
        }
        case 5:
        {
            return _iceD_ice_id(in, current);
        }
        case 6:
        {
            return _iceD_ice_ids(in, current);
        }
        case 7:
        {
            return _iceD_ice_isA(in, current);
        }
        case 8:
        {
            return _iceD_ice_ping(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}

void
RoboCompRGBDBus::RGBDBusPrx::_iceI_getAllCameraParams(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::RoboCompRGBDBus::CameraParamsMap>>& outAsync, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_RoboCompRGBDBus_RGBDBus_getAllCameraParams_name);
    outAsync->invoke(iceC_RoboCompRGBDBus_RGBDBus_getAllCameraParams_name, ::Ice::OperationMode::Idempotent, ::Ice::FormatType::DefaultFormat, context,
        nullptr,
        [](const ::Ice::UserException& ex)
        {
            try
            {
                ex.ice_throw();
            }
            catch(const ::RoboCompRGBDBus::HardwareFailedException&)
            {
                throw;
            }
            catch(const ::Ice::UserException&)
            {
            }
        });
}

void
RoboCompRGBDBus::RGBDBusPrx::_iceI_getImages(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::RoboCompRGBDBus::ImageMap>>& outAsync, const ::RoboCompRGBDBus::CameraList& iceP_cameras, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_RoboCompRGBDBus_RGBDBus_getImages_name);
    outAsync->invoke(iceC_RoboCompRGBDBus_RGBDBus_getImages_name, ::Ice::OperationMode::Idempotent, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_cameras);
        },
        [](const ::Ice::UserException& ex)
        {
            try
            {
                ex.ice_throw();
            }
            catch(const ::RoboCompRGBDBus::HardwareFailedException&)
            {
                throw;
            }
            catch(const ::Ice::UserException&)
            {
            }
        });
}

void
RoboCompRGBDBus::RGBDBusPrx::_iceI_getPointClouds(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::RoboCompRGBDBus::PointCloudMap>>& outAsync, const ::RoboCompRGBDBus::CameraList& iceP_cameras, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_RoboCompRGBDBus_RGBDBus_getPointClouds_name);
    outAsync->invoke(iceC_RoboCompRGBDBus_RGBDBus_getPointClouds_name, ::Ice::OperationMode::Idempotent, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_cameras);
        },
        [](const ::Ice::UserException& ex)
        {
            try
            {
                ex.ice_throw();
            }
            catch(const ::RoboCompRGBDBus::HardwareFailedException&)
            {
                throw;
            }
            catch(const ::Ice::UserException&)
            {
            }
        });
}

void
RoboCompRGBDBus::RGBDBusPrx::_iceI_getProtoClouds(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::RoboCompRGBDBus::PointCloudMap>>& outAsync, const ::RoboCompRGBDBus::CameraList& iceP_cameras, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_RoboCompRGBDBus_RGBDBus_getProtoClouds_name);
    outAsync->invoke(iceC_RoboCompRGBDBus_RGBDBus_getProtoClouds_name, ::Ice::OperationMode::Idempotent, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_cameras);
        },
        [](const ::Ice::UserException& ex)
        {
            try
            {
                ex.ice_throw();
            }
            catch(const ::RoboCompRGBDBus::HardwareFailedException&)
            {
                throw;
            }
            catch(const ::Ice::UserException&)
            {
            }
        });
}

void
RoboCompRGBDBus::RGBDBusPrx::_iceI_getDecimatedImages(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::RoboCompRGBDBus::ImageMap>>& outAsync, const ::RoboCompRGBDBus::CameraList& iceP_cameras, int iceP_decimation, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_RoboCompRGBDBus_RGBDBus_getDecimatedImages_name);
    outAsync->invoke(iceC_RoboCompRGBDBus_RGBDBus_getDecimatedImages_name, ::Ice::OperationMode::Idempotent, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_cameras, iceP_decimation);
        },
        [](const ::Ice::UserException& ex)
        {
            try
            {
                ex.ice_throw();
            }
            catch(const ::RoboCompRGBDBus::HardwareFailedException&)
            {
                throw;
            }
            catch(const ::Ice::UserException&)
            {
            }
        });
}

::std::shared_ptr<::Ice::ObjectPrx>
RoboCompRGBDBus::RGBDBusPrx::_newInstance() const
{
    return ::IceInternal::createProxy<RGBDBusPrx>();
}

const ::std::string&
RoboCompRGBDBus::RGBDBusPrx::ice_staticId()
{
    return RoboCompRGBDBus::RGBDBus::ice_staticId();
}

namespace Ice
{
}

#else // C++98 mapping

namespace
{

const ::std::string iceC_RoboCompRGBDBus_RGBDBus_getAllCameraParams_name = "getAllCameraParams";

const ::std::string iceC_RoboCompRGBDBus_RGBDBus_getImages_name = "getImages";

const ::std::string iceC_RoboCompRGBDBus_RGBDBus_getPointClouds_name = "getPointClouds";

const ::std::string iceC_RoboCompRGBDBus_RGBDBus_getProtoClouds_name = "getProtoClouds";

const ::std::string iceC_RoboCompRGBDBus_RGBDBus_getDecimatedImages_name = "getDecimatedImages";

}

namespace
{

const ::IceInternal::DefaultUserExceptionFactoryInit< ::RoboCompRGBDBus::HardwareFailedException> iceC_RoboCompRGBDBus_HardwareFailedException_init("::RoboCompRGBDBus::HardwareFailedException");

}

RoboCompRGBDBus::HardwareFailedException::HardwareFailedException(const ::std::string& iceP_what) :
    ::Ice::UserException(),
    what(iceP_what)
{
}

RoboCompRGBDBus::HardwareFailedException::~HardwareFailedException() throw()
{
}

::std::string
RoboCompRGBDBus::HardwareFailedException::ice_id() const
{
    return "::RoboCompRGBDBus::HardwareFailedException";
}

RoboCompRGBDBus::HardwareFailedException*
RoboCompRGBDBus::HardwareFailedException::ice_clone() const
{
    return new HardwareFailedException(*this);
}

void
RoboCompRGBDBus::HardwareFailedException::ice_throw() const
{
    throw *this;
}

void
RoboCompRGBDBus::HardwareFailedException::_writeImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice("::RoboCompRGBDBus::HardwareFailedException", -1, true);
    Ice::StreamWriter< ::RoboCompRGBDBus::HardwareFailedException, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
RoboCompRGBDBus::HardwareFailedException::_readImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    Ice::StreamReader< ::RoboCompRGBDBus::HardwareFailedException, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}
::IceProxy::Ice::Object* ::IceProxy::RoboCompRGBDBus::upCast(::IceProxy::RoboCompRGBDBus::RGBDBus* p) { return p; }

void
::IceProxy::RoboCompRGBDBus::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< ::IceProxy::RoboCompRGBDBus::RGBDBus>& v)
{
    ::Ice::ObjectPrx proxy;
    istr->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::RoboCompRGBDBus::RGBDBus;
        v->_copyFrom(proxy);
    }
}

::Ice::AsyncResultPtr
IceProxy::RoboCompRGBDBus::RGBDBus::_iceI_begin_getAllCameraParams(const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_RoboCompRGBDBus_RGBDBus_getAllCameraParams_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_RoboCompRGBDBus_RGBDBus_getAllCameraParams_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_RoboCompRGBDBus_RGBDBus_getAllCameraParams_name, ::Ice::Idempotent, context);
        result->writeEmptyParams();
        result->invoke(iceC_RoboCompRGBDBus_RGBDBus_getAllCameraParams_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

::RoboCompRGBDBus::CameraParamsMap
IceProxy::RoboCompRGBDBus::RGBDBus::end_getAllCameraParams(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_RoboCompRGBDBus_RGBDBus_getAllCameraParams_name);
    ::RoboCompRGBDBus::CameraParamsMap ret;
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::RoboCompRGBDBus::HardwareFailedException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(ret);
    result->_endReadParams();
    return ret;
}

::Ice::AsyncResultPtr
IceProxy::RoboCompRGBDBus::RGBDBus::_iceI_begin_getImages(const ::RoboCompRGBDBus::CameraList& iceP_cameras, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_RoboCompRGBDBus_RGBDBus_getImages_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_RoboCompRGBDBus_RGBDBus_getImages_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_RoboCompRGBDBus_RGBDBus_getImages_name, ::Ice::Idempotent, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_cameras);
        result->endWriteParams();
        result->invoke(iceC_RoboCompRGBDBus_RGBDBus_getImages_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

void
IceProxy::RoboCompRGBDBus::RGBDBus::end_getImages(::RoboCompRGBDBus::ImageMap& iceP_images, const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_RoboCompRGBDBus_RGBDBus_getImages_name);
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::RoboCompRGBDBus::HardwareFailedException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(iceP_images);
    result->_endReadParams();
}

::Ice::AsyncResultPtr
IceProxy::RoboCompRGBDBus::RGBDBus::_iceI_begin_getPointClouds(const ::RoboCompRGBDBus::CameraList& iceP_cameras, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_RoboCompRGBDBus_RGBDBus_getPointClouds_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_RoboCompRGBDBus_RGBDBus_getPointClouds_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_RoboCompRGBDBus_RGBDBus_getPointClouds_name, ::Ice::Idempotent, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_cameras);
        result->endWriteParams();
        result->invoke(iceC_RoboCompRGBDBus_RGBDBus_getPointClouds_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

void
IceProxy::RoboCompRGBDBus::RGBDBus::end_getPointClouds(::RoboCompRGBDBus::PointCloudMap& iceP_clouds, const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_RoboCompRGBDBus_RGBDBus_getPointClouds_name);
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::RoboCompRGBDBus::HardwareFailedException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(iceP_clouds);
    result->_endReadParams();
}

::Ice::AsyncResultPtr
IceProxy::RoboCompRGBDBus::RGBDBus::_iceI_begin_getProtoClouds(const ::RoboCompRGBDBus::CameraList& iceP_cameras, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_RoboCompRGBDBus_RGBDBus_getProtoClouds_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_RoboCompRGBDBus_RGBDBus_getProtoClouds_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_RoboCompRGBDBus_RGBDBus_getProtoClouds_name, ::Ice::Idempotent, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_cameras);
        result->endWriteParams();
        result->invoke(iceC_RoboCompRGBDBus_RGBDBus_getProtoClouds_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

void
IceProxy::RoboCompRGBDBus::RGBDBus::end_getProtoClouds(::RoboCompRGBDBus::PointCloudMap& iceP_protoClouds, const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_RoboCompRGBDBus_RGBDBus_getProtoClouds_name);
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::RoboCompRGBDBus::HardwareFailedException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(iceP_protoClouds);
    result->_endReadParams();
}

::Ice::AsyncResultPtr
IceProxy::RoboCompRGBDBus::RGBDBus::_iceI_begin_getDecimatedImages(const ::RoboCompRGBDBus::CameraList& iceP_cameras, ::Ice::Int iceP_decimation, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_RoboCompRGBDBus_RGBDBus_getDecimatedImages_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_RoboCompRGBDBus_RGBDBus_getDecimatedImages_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_RoboCompRGBDBus_RGBDBus_getDecimatedImages_name, ::Ice::Idempotent, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_cameras);
        ostr->write(iceP_decimation);
        result->endWriteParams();
        result->invoke(iceC_RoboCompRGBDBus_RGBDBus_getDecimatedImages_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

void
IceProxy::RoboCompRGBDBus::RGBDBus::end_getDecimatedImages(::RoboCompRGBDBus::ImageMap& iceP_images, const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_RoboCompRGBDBus_RGBDBus_getDecimatedImages_name);
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::RoboCompRGBDBus::HardwareFailedException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(iceP_images);
    result->_endReadParams();
}

::IceProxy::Ice::Object*
IceProxy::RoboCompRGBDBus::RGBDBus::_newInstance() const
{
    return new RGBDBus;
}

const ::std::string&
IceProxy::RoboCompRGBDBus::RGBDBus::ice_staticId()
{
    return ::RoboCompRGBDBus::RGBDBus::ice_staticId();
}

RoboCompRGBDBus::RGBDBus::~RGBDBus()
{
}

::Ice::Object* RoboCompRGBDBus::upCast(::RoboCompRGBDBus::RGBDBus* p) { return p; }


namespace
{
const ::std::string iceC_RoboCompRGBDBus_RGBDBus_ids[2] =
{
    "::Ice::Object",
    "::RoboCompRGBDBus::RGBDBus"
};

}

bool
RoboCompRGBDBus::RGBDBus::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_RoboCompRGBDBus_RGBDBus_ids, iceC_RoboCompRGBDBus_RGBDBus_ids + 2, s);
}

::std::vector< ::std::string>
RoboCompRGBDBus::RGBDBus::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&iceC_RoboCompRGBDBus_RGBDBus_ids[0], &iceC_RoboCompRGBDBus_RGBDBus_ids[2]);
}

const ::std::string&
RoboCompRGBDBus::RGBDBus::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
RoboCompRGBDBus::RGBDBus::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::RoboCompRGBDBus::RGBDBus";
    return typeId;
#else
    return iceC_RoboCompRGBDBus_RGBDBus_ids[1];
#endif
}

bool
RoboCompRGBDBus::RGBDBus::_iceD_getAllCameraParams(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Idempotent, current.mode);
    inS.readEmptyParams();
    ::RoboCompRGBDBus::CameraParamsMap ret = this->getAllCameraParams(current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(ret);
    inS.endWriteParams();
    return true;
}

bool
RoboCompRGBDBus::RGBDBus::_iceD_getImages(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Idempotent, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::RoboCompRGBDBus::CameraList iceP_cameras;
    istr->read(iceP_cameras);
    inS.endReadParams();
    ::RoboCompRGBDBus::ImageMap iceP_images;
    this->getImages(iceP_cameras, iceP_images, current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(iceP_images);
    inS.endWriteParams();
    return true;
}

bool
RoboCompRGBDBus::RGBDBus::_iceD_getPointClouds(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Idempotent, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::RoboCompRGBDBus::CameraList iceP_cameras;
    istr->read(iceP_cameras);
    inS.endReadParams();
    ::RoboCompRGBDBus::PointCloudMap iceP_clouds;
    this->getPointClouds(iceP_cameras, iceP_clouds, current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(iceP_clouds);
    inS.endWriteParams();
    return true;
}

bool
RoboCompRGBDBus::RGBDBus::_iceD_getProtoClouds(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Idempotent, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::RoboCompRGBDBus::CameraList iceP_cameras;
    istr->read(iceP_cameras);
    inS.endReadParams();
    ::RoboCompRGBDBus::PointCloudMap iceP_protoClouds;
    this->getProtoClouds(iceP_cameras, iceP_protoClouds, current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(iceP_protoClouds);
    inS.endWriteParams();
    return true;
}

bool
RoboCompRGBDBus::RGBDBus::_iceD_getDecimatedImages(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Idempotent, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::RoboCompRGBDBus::CameraList iceP_cameras;
    ::Ice::Int iceP_decimation;
    istr->read(iceP_cameras);
    istr->read(iceP_decimation);
    inS.endReadParams();
    ::RoboCompRGBDBus::ImageMap iceP_images;
    this->getDecimatedImages(iceP_cameras, iceP_decimation, iceP_images, current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(iceP_images);
    inS.endWriteParams();
    return true;
}

namespace
{
const ::std::string iceC_RoboCompRGBDBus_RGBDBus_all[] =
{
    "getAllCameraParams",
    "getDecimatedImages",
    "getImages",
    "getPointClouds",
    "getProtoClouds",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

}

bool
RoboCompRGBDBus::RGBDBus::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_RoboCompRGBDBus_RGBDBus_all, iceC_RoboCompRGBDBus_RGBDBus_all + 9, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_RoboCompRGBDBus_RGBDBus_all)
    {
        case 0:
        {
            return _iceD_getAllCameraParams(in, current);
        }
        case 1:
        {
            return _iceD_getDecimatedImages(in, current);
        }
        case 2:
        {
            return _iceD_getImages(in, current);
        }
        case 3:
        {
            return _iceD_getPointClouds(in, current);
        }
        case 4:
        {
            return _iceD_getProtoClouds(in, current);
        }
        case 5:
        {
            return _iceD_ice_id(in, current);
        }
        case 6:
        {
            return _iceD_ice_ids(in, current);
        }
        case 7:
        {
            return _iceD_ice_isA(in, current);
        }
        case 8:
        {
            return _iceD_ice_ping(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}

void
RoboCompRGBDBus::RGBDBus::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice(ice_staticId(), -1, true);
    Ice::StreamWriter< ::RoboCompRGBDBus::RGBDBus, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
RoboCompRGBDBus::RGBDBus::_iceReadImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    Ice::StreamReader< ::RoboCompRGBDBus::RGBDBus, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}

void
RoboCompRGBDBus::_icePatchObjectPtr(RGBDBusPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::RoboCompRGBDBus::RGBDBusPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::RoboCompRGBDBus::RGBDBus::ice_staticId(), v);
    }
}

namespace Ice
{
}

#endif
