//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXEffect : NSObject
{
}

+ (id)updateOutgoingEffects:(id)arg1;
+ (id)updateIncomingEffects:(id)arg1;
+ (void)writeGlow:(id)arg1 to:(id)arg2;
+ (void)readGlow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (void)writeReflection:(id)arg1 to:(id)arg2;
+ (void)readReflection:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (void)writePresetShadow:(id)arg1 to:(id)arg2;
+ (void)readPresetShadow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (void)writeOuterShadow:(id)arg1 includeRotateWithShape:(_Bool)arg2 to:(id)arg3;
+ (void)readOuterShadow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (void)readShadow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (_Bool)isEmpty:(id)arg1;
+ (id)readEffectsFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (id)presetShadowTypeEnumMap;
+ (void)writeShadowBase:(id)arg1 to:(id)arg2;

@end
