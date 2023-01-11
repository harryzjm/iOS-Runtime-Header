//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorHeaderPicker-Protocol.h>

@class NSArray, NSString;

@interface AVTAvatarAttributeEditorHeaderPicker : NSObject <AVTAvatarAttributeEditorHeaderPicker>
{
    _Bool _alwaysPresentAlert;
    NSString *_identifier;
    NSArray *_choices;
}

+ (id)headerPickerForPairableModelCategory:(id)arg1 isPaired:(_Bool)arg2 avatarUpdaterOnPair:(CDUnknownBlockType)arg3;
+ (id)headerPickerFromEditorSection:(id)arg1;
@property(readonly, nonatomic) _Bool alwaysPresentAlert; // @synthesize alwaysPresentAlert=_alwaysPresentAlert;
@property(readonly, copy, nonatomic) NSArray *choices; // @synthesize choices=_choices;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 choices:(id)arg2 alwaysPresentAlert:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
