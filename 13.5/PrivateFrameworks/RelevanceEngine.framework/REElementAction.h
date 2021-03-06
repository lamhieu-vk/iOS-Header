//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCoding-Protocol.h>
#import <RelevanceEngine/NSCopying-Protocol.h>

@protocol REElementActionDelegate;

@interface REElementAction : NSObject <NSCopying, NSCoding>
{
    id <REElementActionDelegate> _delegate;
    _Bool _forceExecution;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceExecution; // @synthesize forceExecution=_forceExecution;
- (void)_didFinish:(_Bool)arg1;
- (void)_performWithContext:(id)arg1;
@property(nonatomic) __weak id <REElementActionDelegate> delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

