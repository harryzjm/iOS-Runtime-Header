//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface C3DBinding : NSObject
{
    id sourceObject;
    NSString *keyPathSrc;
    NSString *keyPathDst;
    NSDictionary *options;
}

@property(retain, nonatomic) NSDictionary *options; // @synthesize options;
@property(retain, nonatomic) NSString *keyPathDst; // @synthesize keyPathDst;
@property(retain, nonatomic) NSString *keyPathSrc; // @synthesize keyPathSrc;
@property(retain, nonatomic) id sourceObject; // @synthesize sourceObject;
- (void)dealloc;

@end

