//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBParagraphProperties : NSObject
{
}

+ (struct WrdParagraphProperties *)createTrackedPropertiesIfNeeded:(id)arg1;
+ (void)readFrom:(id)arg1 wrdProperties:(struct WrdParagraphProperties *)arg2 tracked:(struct WrdParagraphProperties *)arg3 document:(id)arg4 properties:(id)arg5;
+ (id)formattingChangeDate:(const struct WrdDateTime *)arg1;
+ (void)mapWordProperties:(struct WrdParagraphProperties *)arg1 reader:(id)arg2 toProperties:(id)arg3;

@end

