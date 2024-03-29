//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CalBirthdayListener;

__attribute__((visibility("hidden")))
@interface CADBirthdayListener : NSObject
{
    id <CalBirthdayListener> _ekBirthdayListener;
    Class _listenerClass;
}

+ (_Bool)birthdayCalendarEnabled;
+ (void)setBirthdayCalendarEnabled:(_Bool)arg1;
+ (void)reset;
+ (void)start;
+ (id)sharedListener;
- (void).cxx_destruct;
@property(retain, nonatomic) Class listenerClass; // @synthesize listenerClass=_listenerClass;
@property(retain, nonatomic) id <CalBirthdayListener> ekBirthdayListener; // @synthesize ekBirthdayListener=_ekBirthdayListener;
- (_Bool)birthdayCalendarEnabled;
- (void)setBirthdayCalendarEnabled:(_Bool)arg1;
- (void)reset;
- (void)start;
- (id)init;

@end

