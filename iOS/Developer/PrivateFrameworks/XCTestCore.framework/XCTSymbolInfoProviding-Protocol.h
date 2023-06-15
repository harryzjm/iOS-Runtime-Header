//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTestCore/NSObject-Protocol.h>

@class NSSet, NSString, XCTSourceCodeSymbolInfo;

@protocol XCTSymbolInfoProviding <NSObject>
- (XCTSourceCodeSymbolInfo *)symbolInfoForImageOffset:(unsigned long long)arg1 forImageWithPath:(NSString *)arg2 andArch:(NSString *)arg3 error:(id *)arg4;
- (XCTSourceCodeSymbolInfo *)symbolInfoForImageOffset:(unsigned long long)arg1 inImageWithUUID:(NSString *)arg2 error:(id *)arg3;
- (XCTSourceCodeSymbolInfo *)symbolInfoForAddressInCurrentProcess:(unsigned long long)arg1 error:(id *)arg2;

@optional
@property(readonly) NSSet *symbolInfoImageNames;
@end

