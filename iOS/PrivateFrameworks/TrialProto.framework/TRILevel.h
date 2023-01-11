//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, TRIFile;

@interface TRILevel
{
}

+ (id)descriptor;
- (id)object;
- (id)fileOrDirectoryLevelWithIsDir:(_Bool *)arg1;

// Remaining properties
@property(copy, nonatomic) NSData *binaryValue; // @dynamic binaryValue;
@property(nonatomic) _Bool booleanValue; // @dynamic booleanValue;
@property(retain, nonatomic) TRIFile *directoryValue; // @dynamic directoryValue;
@property(nonatomic) double doubleValue; // @dynamic doubleValue;
@property(retain, nonatomic) TRIFile *fileValue; // @dynamic fileValue;
@property(nonatomic) float floatValue; // @dynamic floatValue;
@property(nonatomic) int intValue; // @dynamic intValue;
@property(readonly, nonatomic) int levelOneOfCase; // @dynamic levelOneOfCase;
@property(nonatomic) long long longValue; // @dynamic longValue;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;

@end
