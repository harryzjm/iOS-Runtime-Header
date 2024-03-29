//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivityViewController.h>

@class LPMetadataProvider, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIShareActivityViewController_iOS : UIActivityViewController
{
    LPMetadataProvider *_pendingMessageMetadataProvider;
    NSURL *_sharingURL;
    NSURL *_itemImageURL;
    NSString *_itemTitle;
    NSString *_itemSubtitle;
}

+ (void)shareMediaWithShareSheet:(id)arg1;
+ (void)shareMediaItem:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURLStr:(id)arg4 groupActivityMetadata:(id)arg5 sourceView:(id)arg6 sourceRect:(struct CGRect)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (void)shareMediaItem:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURLStr:(id)arg4 groupActivityMetadata:(id)arg5 sourceRect:(struct CGRect)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)shareMediaItem:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURLStr:(id)arg4 groupActivityMetadata:(id)arg5 sourceView:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)shareMediaItem:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURLStr:(id)arg4 sharedWatchId:(id)arg5 sharedWatchUrl:(id)arg6 sourceView:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *itemSubtitle; // @synthesize itemSubtitle=_itemSubtitle;
@property(retain, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(retain, nonatomic) NSURL *itemImageURL; // @synthesize itemImageURL=_itemImageURL;
- (void)_prepareActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;

@end

