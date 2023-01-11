//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorSection-Protocol.h>

@class NSArray, NSString;

@interface AVTAvatarAttributeEditorSection : NSObject <AVTAvatarAttributeEditorSection>
{
    NSArray *_sectionItems;
    NSString *_localizedName;
    NSString *_identifier;
}

@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy, nonatomic) NSArray *sectionItems; // @synthesize sectionItems=_sectionItems;
- (void).cxx_destruct;
- (_Bool)shouldDisplaySeparatorBeforeSection:(id)arg1;
- (_Bool)shouldDisplayTitle;
@property(readonly, copy) NSString *description;
- (id)initWithSectionItems:(id)arg1 localizedName:(id)arg2 identifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
