//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface AMSURLSecurityPolicy : NSObject
{
    long long _trustMode;
    NSSet *_pinnedCertificates;
}

+ (id)defaultPolicy;
@property(retain, nonatomic) NSSet *pinnedCertificates; // @synthesize pinnedCertificates=_pinnedCertificates;
@property(nonatomic) long long trustMode; // @synthesize trustMode=_trustMode;
- (void).cxx_destruct;
- (_Bool)_shouldSkipValidation;
- (_Bool)_evaluatePinnedCertificatesWithTrust:(struct __SecTrust *)arg1 forTask:(id)arg2;
- (_Bool)_evaluateExtendedValidationWithTrust:(struct __SecTrust *)arg1 forTask:(id)arg2;
- (_Bool)evaluateTrust:(struct __SecTrust *)arg1 forTask:(id)arg2;
- (id)initWithTrustMode:(long long)arg1 pinnedCertificated:(id)arg2;
- (id)initWithTrustMode:(long long)arg1;

@end

