//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFMultipleValueParameterState.h>

@interface WFContactSubstitutableState : WFMultipleValueParameterState
{
}

+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (Class)processingValueClass;
- (id)valueItemClasses;
- (id)stringInterpretedAsContactHandle:(id)arg1;
- (_Bool)reinterpretsStringsAsContactHandlesFromVariable:(_Bool)arg1;
- (void)processContentCollection:(id)arg1 fromVariable:(_Bool)arg2 valueHandler:(CDUnknownBlockType)arg3;
- (id)collectionByConvertingStringItemsToHandles:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;
- (id)initWithValue:(id)arg1;

@end

