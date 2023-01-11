//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/SBUIBannerItem.h>

@class CPImageSet, NSArray, NSString, NSUUID;
@protocol CPBannerDelegate;

@interface CPSBannerItem : SBUIBannerItem
{
    NSUUID *_identifier;
    NSString *_bundleIdentifier;
    NSArray *_textVariants;
    NSArray *_detailTextVariants;
    NSArray *_attributedDetailTextVariants;
    CPImageSet *_imageSet;
    id <CPBannerDelegate> _delegate;
}

@property(nonatomic) __weak id <CPBannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CPImageSet *imageSet; // @synthesize imageSet=_imageSet;
@property(readonly, nonatomic) NSArray *attributedDetailTextVariants; // @synthesize attributedDetailTextVariants=_attributedDetailTextVariants;
@property(readonly, nonatomic) NSArray *detailTextVariants; // @synthesize detailTextVariants=_detailTextVariants;
@property(readonly, nonatomic) NSArray *textVariants; // @synthesize textVariants=_textVariants;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToBannerItem:(id)arg1;
- (CDUnknownBlockType)action;
- (_Bool)isSticky;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 textVariants:(id)arg3 detailTextVariants:(id)arg4 attributedDetailTextVariants:(id)arg5 imageSet:(id)arg6 delegate:(id)arg7;

@end

