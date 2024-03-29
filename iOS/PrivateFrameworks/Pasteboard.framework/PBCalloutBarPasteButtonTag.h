//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PBPasteButtonTag.h"

__attribute__((visibility("hidden")))
@interface PBCalloutBarPasteButtonTag : PBPasteButtonTag
{
    unsigned int _secureName;
    double _titleWidth;
    unsigned long long _contentScaleLevel;
    struct CGSize _size;
    struct CGPoint _titleOrigin;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) unsigned long long contentScaleLevel; // @synthesize contentScaleLevel=_contentScaleLevel;
@property(readonly) double titleWidth; // @synthesize titleWidth=_titleWidth;
@property(readonly) struct CGPoint titleOrigin; // @synthesize titleOrigin=_titleOrigin;
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
- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecureName:(unsigned int)arg1 size:(struct CGSize)arg2 titleOrigin:(struct CGPoint)arg3 titleWidth:(double)arg4 contentScaleLevel:(unsigned long long)arg5;

@end

