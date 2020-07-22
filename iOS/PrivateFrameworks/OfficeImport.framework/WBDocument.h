//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBDocument : NSObject
{
}

+ (id)readFrom:(id)arg1;
+ (void)setupZIndices:(id)arg1 document:(id)arg2 escherType:(int)arg3;
+ (void)readProperties:(id)arg1 document:(id)arg2;
+ (void)readTextBoxesFrom:(id)arg1;
+ (void)readNoteSeparatorFrom:(id)arg1 type:(int)arg2 separator:(id)arg3;
+ (void)readSectionsFrom:(id)arg1 document:(id)arg2;
+ (void)setTimeStamp:(struct WrdDocumentProperties *)arg1;
- (id)applicationName;
- (id)init;

@end

