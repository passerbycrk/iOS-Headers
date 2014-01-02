/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "WebAllowDenyPolicyListener-Protocol.h"

// Not exported
@interface WKWebAllowDenyPolicyListener : NSObject <WebAllowDenyPolicyListener>
{
    struct RetainPtr<WKGeolocationProviderIOS> {
        struct WKGeolocationProviderIOS {
            Class;
            struct RefPtr<WebKit::WebGeolocationManagerProxy>;
            struct RetainPtr<WebGeolocationCoreLocationProvider>;
            _Bool;
            struct RefPtr<WebKit::WebGeolocationPosition>;
            struct Vector<GeolocationRequestData, 0, WTF::CrashOnOverflow>;
            struct HashSet<void *, WTF::PtrHash<void *>, WTF::HashTraits<void *>>;
        } *m_ptr;
    } _provider;
    struct RefPtr<WebKit::GeolocationPermissionRequestProxy> _permissionRequestProxy;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldClearCache;
- (void)denyOnlyThisRequest;
- (void)deny;
- (void)allow;
- (id)initWithProvider:(id)arg1 permissionRequestProxy:(PassRefPtr_da409672)arg2;

@end
