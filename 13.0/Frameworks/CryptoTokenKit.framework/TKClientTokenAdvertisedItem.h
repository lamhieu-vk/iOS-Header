//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TKClientTokenSession;

@interface TKClientTokenAdvertisedItem : NSObject
{
    id _secRef;
    TKClientTokenSession *_session;
    NSDictionary *_keychainAttributes;
}

@property(readonly, nonatomic) NSDictionary *keychainAttributes; // @synthesize keychainAttributes=_keychainAttributes;
@property(readonly, nonatomic) TKClientTokenSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct __SecIdentity *identityRef;
@property(readonly, nonatomic) struct __SecCertificate *certificateRef;
@property(readonly, nonatomic) struct __SecKey *keyRef;
@property(readonly, nonatomic) unsigned long long keyUsage;
@property(readonly, nonatomic) id keychainClass;
@property(readonly, nonatomic) NSString *localizedName;
- (id)initWithSession:(id)arg1 keychainAttributes:(id)arg2 secRef:(id)arg3;

@end

