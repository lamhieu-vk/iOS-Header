//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFParameter;

@protocol WFParameterEventObserver <NSObject>

@optional
- (void)parameterStateValidityCriteriaDidChange:(WFParameter *)arg1;
- (void)parameterDefaultSerializedRepresentationDidChange:(WFParameter *)arg1;
- (void)parameterAttributesDidChange:(WFParameter *)arg1;
@end

