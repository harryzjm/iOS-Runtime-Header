//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ABVCardDateScanner : NSObject
{
    NSString *_string;
    unsigned long long _position;
}

+ (id)scannerWithString:(id)arg1;
@property(readonly) unsigned long long position; // @synthesize position=_position;
- (unsigned short)nextCharacter;
- (_Bool)isAtEnd;
- (_Bool)scanLeapMarker;
- (unsigned long long)lengthOfCalendarUnit:(unsigned long long)arg1;
- (long long)scanCalendarUnit:(unsigned long long)arg1;
- (long long)scanComponentValueOfLength:(unsigned long long)arg1;
- (id)initWithString:(id)arg1;

@end

