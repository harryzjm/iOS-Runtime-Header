//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBTable : NSObject
{
}

+ (_Bool)tryToReadRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3;
+ (void)readFrom:(id)arg1 textRuns:(id)arg2 table:(id)arg3;
+ (_Bool)isTableFloating:(const struct WrdTableProperties *)arg1 tracked:(const struct WrdTableProperties *)arg2;
+ (void)readRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3;
+ (void)initPropertiesFrom:(id)arg1 to:(id)arg2 in:(id)arg3;

@end

