//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXWorksheet : NSObject
{
}

+ (void)readTables:(id)arg1;
+ (void)readOtherSheetComponentsWithState:(id)arg1;
+ (_Bool)readDistinctSheetElementsFrom:(struct _xmlTextReader *)arg1 state:(id)arg2;
+ (id)edSheetWithState:(id)arg1;
+ (void)readPivotTables:(id)arg1;
+ (void)readCommentTextFrom:(id)arg1;
+ (void)readSheetExtension:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readSheetExtensions:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readHyperlinksFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readColumnInfosFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readWorksheetFormatPropertiesFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readWorksheetViewsFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readOleObjectsFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)setupProcessors:(id)arg1;

@end

