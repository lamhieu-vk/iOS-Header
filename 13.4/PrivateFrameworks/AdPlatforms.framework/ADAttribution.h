//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AdPlatforms/ADAttribution_XPC-Protocol.h>

@interface ADAttribution : NSObject <ADAttribution_XPC>
{
    _Bool _hasCompletedResponse;
    int _numRetries;
}

+ (id)sharedInstance;
@property(nonatomic) int numRetries; // @synthesize numRetries=_numRetries;
@property(nonatomic) _Bool hasCompletedResponse; // @synthesize hasCompletedResponse=_hasCompletedResponse;
- (void)setStocksAdEnabled:(_Bool)arg1;
- (void)requestAttributionDetailsWithBlock:(CDUnknownBlockType)arg1;
- (void)initiateRequestOnConnection:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

