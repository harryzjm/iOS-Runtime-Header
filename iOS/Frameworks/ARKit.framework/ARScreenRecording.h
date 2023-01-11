//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface ARScreenRecording : NSObject
{
    _Bool _saveInPhotosLibrary;
    UIViewController *_parentViewController;
}

@property(retain, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) _Bool saveInPhotosLibrary; // @synthesize saveInPhotosLibrary=_saveInPhotosLibrary;
- (void).cxx_destruct;
- (void)alertUserWithTitle:(id)arg1 message:(id)arg2;
- (void)stop;
- (void)start;
- (id)initWith:(id)arg1;

@end
