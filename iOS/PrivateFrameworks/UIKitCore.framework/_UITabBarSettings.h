//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

__attribute__((visibility("hidden")))
@interface _UITabBarSettings : PTSettings
{
    _Bool _highlightSystemItems;
    _Bool _showAlignmentGuides;
}

+ (id)settingsControllerModule;
@property(nonatomic) _Bool showAlignmentGuides; // @synthesize showAlignmentGuides=_showAlignmentGuides;
@property(nonatomic) _Bool highlightSystemItems; // @synthesize highlightSystemItems=_highlightSystemItems;
- (void)setDefaultValues;

@end
