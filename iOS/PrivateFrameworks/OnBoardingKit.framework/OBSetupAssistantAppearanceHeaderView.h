//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "OBHeaderView.h"

@class OBAppearanceTemplateHeaderDetailLabel, OBAppearanceTemplateLabel;

__attribute__((visibility("hidden")))
@interface OBSetupAssistantAppearanceHeaderView : OBHeaderView
{
    OBAppearanceTemplateLabel *_appearanceHeaderLabel;
    OBAppearanceTemplateHeaderDetailLabel *_appearanceDetailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OBAppearanceTemplateHeaderDetailLabel *appearanceDetailLabel; // @synthesize appearanceDetailLabel=_appearanceDetailLabel;
@property(retain, nonatomic) OBAppearanceTemplateLabel *appearanceHeaderLabel; // @synthesize appearanceHeaderLabel=_appearanceHeaderLabel;
- (id)detailLabel;
- (id)headerLabel;

@end

