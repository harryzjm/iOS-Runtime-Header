//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDOntologyTSVScanner, HDSimpleGraphDatabase, NSString;

@protocol HDOntologyMercuryZipTSVLineImporter <NSObject>
+ (_Bool)importLineWithScanner:(HDOntologyTSVScanner *)arg1 slot:(long long)arg2 graphDatabase:(HDSimpleGraphDatabase *)arg3 context:(CDStruct_6418200f *)arg4 error:(id *)arg5;
+ (_Bool)isHeaderLine:(NSString *)arg1;
@end

