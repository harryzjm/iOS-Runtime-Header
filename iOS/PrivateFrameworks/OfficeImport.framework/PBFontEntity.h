//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PBFontEntity : NSObject
{
    NSString *mFaceName;
    int mCharSet;
    int mType;
    int mFamily;
}

- (int)family;
- (int)type;
- (int)charSet;
- (id)faceName;
- (void)dealloc;
- (id)initWithName:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;

@end
