//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBSection : NSObject
{
}

+ (void)readFrom:(id)arg1 textRun:(struct WrdSectionTextRun *)arg2 document:(id)arg3 index:(int)arg4 section:(id)arg5;
+ (void)mapPrinterSettings:(struct WrdSectionProperties *)arg1 toSection:(id)arg2;
+ (void)mapSection:(id)arg1 toSectionProperties:(struct WrdSectionProperties *)arg2;
+ (void)mapSectionProperties:(struct WrdSectionProperties *)arg1 toSection:(id)arg2;
+ (void)readHeaderFrom:(id)arg1 type:(int)arg2 index:(int)arg3 header:(id)arg4;

@end

