//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@class FCCKContentFetchOperation;

@interface FCRecordFieldURLProtocol : NSURLProtocol
{
    FCCKContentFetchOperation *_fetchOperation;
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)URLForRecordID:(id)arg1 fieldName:(id)arg2;
+ (void)unregister;
+ (void)setupWithArticleDatabase:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FCCKContentFetchOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
- (void)stopLoading;
- (void)startLoading;

@end

