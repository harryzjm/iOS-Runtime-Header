//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface SCROBrailleEvent : NSObject
{
    int _type;
    id _data;
    id _data2;
    id _data3;
    _Bool _shouldDisplay;
}

+ (id)eventWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;
+ (id)eventWithType:(int)arg1 data:(id)arg2;
@property(nonatomic) _Bool shouldDisplay; // @synthesize shouldDisplay=_shouldDisplay;
- (void).cxx_destruct;
- (id)description;
- (id)data3;
- (id)data2;
- (id)data;
- (int)type;
- (id)initWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;

@end
