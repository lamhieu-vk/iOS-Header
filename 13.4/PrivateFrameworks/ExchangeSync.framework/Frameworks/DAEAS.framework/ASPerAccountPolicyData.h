//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ASPerAccountPolicyData : NSObject
{
    NSString *_accountPersistentUUID;
}

- (void).cxx_destruct;
- (void)setPolicyKey:(id)arg1 policyValues:(id)arg2;
@property(readonly, nonatomic) NSDictionary *policyValues;
@property(readonly, nonatomic) NSString *policyKey;
- (id)description;
- (id)initWithAccountPersistentUUID:(id)arg1;

@end

