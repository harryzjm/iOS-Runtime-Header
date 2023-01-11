//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PIZlibDataDecompressionOptions : NSObject
{
    _Bool _decompressAllAtOnce;
    int _windowBits;
    CDUnknownBlockType _createBuffer;
    CDUnknownBlockType _growData;
}

+ (id)defaultOptions;
@property(nonatomic) _Bool decompressAllAtOnce; // @synthesize decompressAllAtOnce=_decompressAllAtOnce;
@property(copy, nonatomic) CDUnknownBlockType growData; // @synthesize growData=_growData;
@property(copy, nonatomic) CDUnknownBlockType createBuffer; // @synthesize createBuffer=_createBuffer;
@property(nonatomic) int windowBits; // @synthesize windowBits=_windowBits;
- (void).cxx_destruct;

@end
