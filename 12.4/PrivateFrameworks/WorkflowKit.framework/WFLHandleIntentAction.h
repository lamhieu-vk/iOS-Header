//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFLAction.h>

@class INIntent;

@interface WFLHandleIntentAction : WFLAction
{
    _Bool _forceExecutionOnPhone;
    INIntent *_intent;
}

@property(readonly, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) _Bool forceExecutionOnPhone; // @synthesize forceExecutionOnPhone=_forceExecutionOnPhone;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (Class)implementationClass;
- (id)appBundleIdentifier;
- (void)continueInAppWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2;
- (id)initWithIntent:(id)arg1;
- (id)initWithIntent:(id)arg1 forceExecutionOnPhone:(_Bool)arg2;

@end

