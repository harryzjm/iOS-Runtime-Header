//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PFSharingUtilities : NSObject
{
}

+ (id)addCreationDate:(id)arg1 toTIFFDictionary:(id)arg2;
+ (id)addCreationDate:(id)arg1 toExifDictionary:(id)arg2;
+ (id)exifSubsecTimeFromDate:(id)arg1;
+ (id)exifDateTimeFromDate:(id)arg1;
+ (id)_exifSubsecTimeFormatter;
+ (id)_exifDateTimeFormatter;
+ (id)gpsDictionaryForLocation:(id)arg1;
+ (id)_gpsDateFormatter;
+ (id)_gpsTimeFormatter;
+ (id)_dateFormatterTemplate;
+ (id)addCustomLocation:(id)arg1 toAVMetadata:(id)arg2;
+ (id)addCustomDate:(id)arg1 toAVMetadata:(id)arg2;
+ (id)setString:(id)arg1 forKey:(id)arg2 inKeySpace:(id)arg3 inAVMetadata:(id)arg4;
+ (id)addDescription:(id)arg1 toAVMetadata:(id)arg2;
+ (id)addAccessibilityDescription:(id)arg1 toAVMetadata:(id)arg2;

@end
