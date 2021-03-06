//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSProgress, NSString, NSURL, TSAImportController;

@protocol TSAImportDelegate <NSObject>

@optional
- (void)importControllerDidFinishResourceAccess:(TSAImportController *)arg1;
- (void)importController:(TSAImportController *)arg1 willBeginResourceAccessWithProgress:(NSProgress *)arg2 title:(NSString *)arg3 estimatedMissingResourcesSize:(unsigned long long)arg4;
- (_Bool)areNewExternalReferencesToDataAllowedForImportController:(TSAImportController *)arg1;
- (void)importController:(TSAImportController *)arg1 documentDidMoveToURL:(NSURL *)arg2;
- (void)importControllerDidRunOutOfSpace:(TSAImportController *)arg1;
- (void)willSaveImportedDocument:(TSAImportController *)arg1;
@end

