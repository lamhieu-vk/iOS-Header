//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FRDelayedOperation : NSObject
{
    CDUnknownBlockType _operationBlock;
    double _delayTime;
}

+ (id)operation:(CDUnknownBlockType)arg1 delay:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;

@end

