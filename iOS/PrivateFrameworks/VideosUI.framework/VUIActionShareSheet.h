//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, NSURL, UIView;

__attribute__((visibility("hidden")))
@interface VUIActionShareSheet
{
    NSString *_urlString;
    NSString *_title;
    NSString *_subtitle;
    NSString *_imageURLStr;
    NSString *_sharedWatchId;
    NSURL *_sharedWatchUrl;
    UIView *_sourceView;
    NSDictionary *_groupActivityMetadata;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *groupActivityMetadata; // @synthesize groupActivityMetadata=_groupActivityMetadata;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) NSURL *sharedWatchUrl; // @synthesize sharedWatchUrl=_sharedWatchUrl;
@property(retain, nonatomic) NSString *sharedWatchId; // @synthesize sharedWatchId=_sharedWatchId;
@property(retain, nonatomic) NSString *imageURLStr; // @synthesize imageURLStr=_imageURLStr;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1 sourceView:(id)arg2;

@end

