//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString, WKBrowsingContextHandle;

@protocol SFReaderWebProcessControllerProtocol <NSObject>
- (void)collectArticleContent;
- (void)checkReaderAvailability;
- (void)didFinishPresentationUpdateAfterTransitioningToReader;
- (void)prepareReaderContentForPrinting;
- (void)setArticleLocale:(NSString *)arg1;
- (void)setReaderIsActive:(_Bool)arg1;
- (void)activateFont:(NSString *)arg1;
- (void)setConfiguration:(NSDictionary *)arg1;
- (void)collectReaderContentForMail;
- (void)collectReadingListItemInfoWithBookmarkID:(NSNumber *)arg1;
- (void)setInitalArticleScrollPositionAsDictionary:(NSDictionary *)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(NSDictionary *)arg2 isViewingArchive:(_Bool)arg3;
- (void)loadNewReaderArticle;
- (void)didCreateReaderPageContextHandle:(WKBrowsingContextHandle *)arg1;
- (void)prepareToTransitionToReader;
@end

