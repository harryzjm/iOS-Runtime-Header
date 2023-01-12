//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTestCore/NSCopying-Protocol.h>
#import <XCTestCore/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString;

@interface XCTMemgraph : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_leakNodesCount;
    NSNumber *_leakNodesBytes;
    int _processIdentifier;
    NSString *_filePath;
    NSData *_graphData;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *graphData; // @synthesize graphData=_graphData;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)saveMemgraphData:(id)arg1 withProcessName:(id)arg2;
- (void)computeLeakProperties;
@property(readonly, nonatomic) unsigned long long leakNodesBytes;
@property(readonly, nonatomic) unsigned int leakNodesCount;
- (id)initWithGraphData:(id)arg1;
- (id)initWithPid:(int)arg1 filePath:(id)arg2;

@end

