//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface VMUProcessDescription : NSObject
{
    unsigned int _task;
    int _pid;
    _Bool _taskIsCorpse;
    NSString *_processName;
    _Bool _processNameNeedsCorrection;
    NSString *_executablePath;
    struct _CSTypeRef _symbolicator;
    _Bool _executablePathNeedsCorrection;
    unsigned long long _executableLoadAddress;
    int _cpuType;
    _Bool _is64Bit;
    struct timeval _proc_starttime;
    NSDictionary *_lsApplicationInformation;
    NSMutableArray *_binaryImages;
    NSArray *_sortedBinaryImages;
    NSDictionary *_binaryImageHints;
    NSArray *_unreadableBinaryImagePaths;
    _Bool _binaryImagePostProcessingComplete;
    NSDictionary *_buildVersionDictionary;
    NSDictionary *_osVersionDictionary;
    struct mapped_memory_t *_mappedMemory;
    NSString *_parentProcessName;
    NSString *_parentExecutablePath;
    int _ppid;
    NSDate *_date;
    NSMutableDictionary *_environment;
}

+ (struct _CSTypeRef)symbolicatorFromBinaryImagesDescription:(id)arg1;
+ (id)parseBinaryImagesDescription:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)analysisToolDescription;
- (id)dateAndVersionDescription;
- (id)processDescriptionHeader;
- (id)_systemVersionDescription;
- (id)_osVersionDictionary;
- (id)_buildInfoDescription;
- (id)_buildVersionDictionary;
- (id)binaryImagesDescription;
- (id)binaryImagesDescriptionForBacktraces:(id)arg1;
- (id)_rangesOfBinaryImages:(id)arg1 forBacktraces:(id)arg2;
- (id)_binaryImagesDescriptionForRanges:(id)arg1;
- (id)_cpuTypeDescription;
- (id)valueForEnvVar:(id)arg1;
- (id)binaryImageDictionaryForAddress:(unsigned long long)arg1;
- (id)binaryImages;
- (id)_bundleLock;
- (_Bool)isAppleApplication;
- (id)bundleIdentifier;
- (id)executablePath;
- (id)processVersion;
- (id)_sanitizeVersion:(id)arg1;
- (id)processVersionDictionary;
- (id)parentProcessName;
- (id)displayName;
- (id)processIdentifier;
- (id)processName;
- (int)cpuType;
- (_Bool)is64Bit;
- (int)pid;
- (unsigned int)task;
- (id)date;
- (void)_libraryLoaded:(struct _CSTypeRef)arg1;
- (id)_extractInfoPlistFromSymbolOwner:(struct _CSTypeRef)arg1 withMemory:(struct mapped_memory_t *)arg2;
- (id)_readDataFromMemory:(struct mapped_memory_t *)arg1 atAddress:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (_Bool)initFromCorpse;
- (void)initFromLiveProcess;
- (id)initWithTask:(unsigned int)arg1 getBinariesList:(_Bool)arg2;
- (void)clearCrashReporterInfo;
- (void)setCrashReporterInfo;

@end

