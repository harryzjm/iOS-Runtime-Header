//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, NSRegularExpression;

@interface PMLAppleDirectoryBuilder : NSObject
{
    NSMutableData *_data;
    NSRegularExpression *_emailGuessingRegexp;
}

- (void).cxx_destruct;
- (void)loadContactsFromDirectory:(id)arg1;
- (void)_loadContactsFromTextLine:(id)arg1 filepath:(id)arg2;
- (void)loadContactsFromTextFilepath:(id)arg1;
- (id)guessEmailFromIM:(id)arg1;
- (id)serialize;
- (void)addPhoneNumber:(id)arg1 withEmailAddress:(id)arg2;
- (id)init;

@end

