//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class DVTFilePath, NSDate, NSObject, NSString;
@protocol DVTDiskStock;

@interface NSURL (DVTDeviceSupportDiskStockAdditions)
+ (id)dvt_xcodeHelpURLWithAnchor:(id)arg1;
+ (id)dvt_URLWithScheme:(id)arg1 path:(id)arg2 documentParameters:(id)arg3 locationParameters:(id)arg4;
+ (id)dvt_fileURLWithAbsoluteOrRelativePath:(id)arg1;
+ (id)dvt_emptyURL;
- (void)diskStockManager:(id)arg1 didCullThisMemberFromDiskStock:(id)arg2;
- (_Bool)diskStockManager:(id)arg1 willCullThisMemberFromDiskStock:(id)arg2;
- (long long)diskStockMemberCompareTo:(id)arg1;
@property(readonly) NSDate *diskStockMemberTTL;
@property(readonly) NSString *diskStockMemberDisplayName;
@property(readonly) __weak NSObject<DVTDiskStock> *diskStock;
@property(readonly) DVTFilePath *diskStockMemberRepresentation;
- (_Bool)_markedAsKept;
- (void)_markAsKept:(_Bool)arg1;
- (id)_deviceSupportInfo;
- (id)dvt_extractingLocationParametersWithNames:(id)arg1 updatedURL:(id *)arg2;
- (id)dvt_locationParameters;
- (id)dvt_extractingDocumentParametersWithNames:(id)arg1 updatedURL:(id *)arg2;
- (id)dvt_documentParameters;
- (id)dvt_sanitizedFilePath;
- (_Bool)dvt_isGeneneratedInterface;
@property(readonly, nonatomic) _Bool dvt_isFilePathURL;
- (_Bool)dvt_isEmptyURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

