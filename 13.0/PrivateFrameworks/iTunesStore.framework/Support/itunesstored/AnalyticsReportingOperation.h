//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString, SSMetricsEventController;

@interface AnalyticsReportingOperation : ISOperation
{
    SSMetricsEventController *_controller;
    NSString *_directory;
    CDUnknownBlockType _finishBlock;
    long long _insertTimestamp;
}

- (void).cxx_destruct;
- (id)_signatureWithData:(id)arg1 error:(id *)arg2;
- (_Bool)_shouldClearEventsDespiteError:(id)arg1;
- (_Bool)_shouldBackoffAfterError:(id)arg1;
- (_Bool)_runForReportingURL:(id)arg1 suppressUserInfo:(_Bool)arg2 error:(id *)arg3;
- (id)_path;
- (void)_destroyOutputFile:(id)arg1;
- (id)uniqueKey;
- (void)run;
@property(copy) CDUnknownBlockType finishBlock;
- (id)init;
- (id)initWithController:(id)arg1;

@end

