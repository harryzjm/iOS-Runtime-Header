//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle;

@interface VOSVoiceOverCommandHelp : NSObject
{
    NSBundle *_bundle;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_locKeyForGesture:(id)arg1 isRTL:(_Bool)arg2;
- (id)_locKeyForCommand:(id)arg1 isRTL:(_Bool)arg2;
- (id)_locKeyForHandwriting:(id)arg1 isRTL:(_Bool)arg2;
- (_Bool)_isRTLCheckRequiredForCommand:(id)arg1 helpType:(long long)arg2;
- (id)helpSections;
- (id)helpTextForCommand:(id)arg1 helpType:(long long)arg2 rtlCheck:(CDUnknownBlockType)arg3;
- (id)helpTextForCommand:(id)arg1 helpType:(long long)arg2;
- (id)helpTextForLocKey:(id)arg1;
- (id)init;

@end
