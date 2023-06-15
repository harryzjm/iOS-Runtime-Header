//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PBPasteButtonTag.h"

__attribute__((visibility("hidden")))
@interface PBEditMenuPasteButtonTag : PBPasteButtonTag
{
    unsigned int _secureName;
    unsigned long long _displayMode;
    struct CGSize _size;
    struct CGPoint _contentOrigin;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(readonly) struct CGPoint contentOrigin; // @synthesize contentOrigin=_contentOrigin;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) unsigned int secureName; // @synthesize secureName=_secureName;
- (id)_acceptCalloutBarPasteButtonTagVisit:(CDUnknownBlockType)arg1 systemInputAssistantPasteButtonTagVisit:(CDUnknownBlockType)arg2 undoInteractionHUDIconPasteButtonTagVisit:(CDUnknownBlockType)arg3 undoInteractionHUDTextPasteButtonTagVisit:(CDUnknownBlockType)arg4 contextMenuPasteButtonTagVisit:(CDUnknownBlockType)arg5 editMenuPasteButtonTagVisit:(CDUnknownBlockType)arg6;
- (unsigned int)secureNameForStyle:(id)arg1;
- (id)resolvedStyleForStyle:(id)arg1;
- (_Bool)isValid;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (float)backgroundStatisticsForegroundForStyle:(id)arg1;
- (CDStruct_8abe0896)backgroundStatisticsRegionForStyle:(id)arg1;
- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecureName:(unsigned int)arg1 size:(struct CGSize)arg2 contentOrigin:(struct CGPoint)arg3 displayMode:(unsigned long long)arg4;

@end

