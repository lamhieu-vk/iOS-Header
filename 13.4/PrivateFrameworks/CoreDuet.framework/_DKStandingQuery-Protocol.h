//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject, NSString, _DKKnowledgeStorage;
@protocol OS_xpc_object;

@protocol _DKStandingQuery
@property(retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property(retain, nonatomic) NSString *queryIdentifier;
- (void)executeWithStorage:(_DKKnowledgeStorage *)arg1;
- (NSObject *)fetchResult;
@end

