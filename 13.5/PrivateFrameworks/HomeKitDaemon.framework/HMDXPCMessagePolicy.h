//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessagePolicy.h>

@interface HMDXPCMessagePolicy : HMFMessagePolicy
{
    unsigned long long _entitlements;
}

+ (id)defaultPolicy;
+ (id)policyWithEntitlements:(unsigned long long)arg1;
@property(readonly) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)__initWithEntitlements:(unsigned long long)arg1;
- (id)init;

@end

