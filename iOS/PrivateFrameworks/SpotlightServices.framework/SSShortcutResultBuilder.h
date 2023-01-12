//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SSShortcutResultBuilder
{
    _Bool _isBackgroundRunnable;
    NSString *_name;
    NSArray *_alternateNames;
    NSString *_numberOfActionsString;
    NSString *_punchoutLabel;
    NSString *_userActivityRequiredString;
    NSString *_thumbnailURL;
}

+ (_Bool)supportsResult:(id)arg1;
+ (id)bundleId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(retain, nonatomic) NSString *userActivityRequiredString; // @synthesize userActivityRequiredString=_userActivityRequiredString;
@property(retain, nonatomic) NSString *punchoutLabel; // @synthesize punchoutLabel=_punchoutLabel;
@property(retain, nonatomic) NSString *numberOfActionsString; // @synthesize numberOfActionsString=_numberOfActionsString;
@property(retain, nonatomic) NSArray *alternateNames; // @synthesize alternateNames=_alternateNames;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isBackgroundRunnable; // @synthesize isBackgroundRunnable=_isBackgroundRunnable;
- (id)buildFootnote;
- (id)buildDescriptions;
- (id)buildResult;
- (id)initWithResult:(id)arg1;

@end
