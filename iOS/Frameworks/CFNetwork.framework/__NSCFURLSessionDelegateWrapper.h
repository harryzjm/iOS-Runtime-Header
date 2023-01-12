//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLSession;
@protocol OS_dispatch_queue;

@interface __NSCFURLSessionDelegateWrapper : NSObject
{
    unsigned int checked_sessionDidBecomeInvalidWithError:1;
    unsigned int checked_sessionDidReceiveChallenge:1;
    unsigned int checked_sessionDidFinishEventsForBackgroundURLSession:1;
    unsigned int checked__getAuthHeadersForResponse:1;
    unsigned int checked__sessionOpenFileAtPath:1;
    unsigned int checked_didCreateTask:1;
    unsigned int checked_willBeginDelayedRequest:1;
    unsigned int checked_isWaitingForConnectivity:1;
    unsigned int checked_willPerformHTTPRedirection:1;
    unsigned int checked_didReceiveChallenge:1;
    unsigned int checked_needNewBodyStream:1;
    unsigned int checked_didSendBodyData:1;
    unsigned int checked_didFinishCollectingMetrics:1;
    unsigned int checked_didCompleteWithError:1;
    unsigned int checked__schemeUpgraded:1;
    unsigned int checked__willSendRequestForEstablishedConnection:1;
    unsigned int checked__conditionalRequirementsChanged:1;
    unsigned int checked__didReceiveInformationalResponse:1;
    unsigned int checked__willUseEffectiveConfiguration:1;
    unsigned int checked__isWaitingForConnection_withoutError:1;
    unsigned int checked__isWaitingForConnection_withError:1;
    unsigned int checked__alternatePathAvailable:1;
    unsigned int checked_didReceiveResponse:1;
    unsigned int checked_didBecomeDownloadTask:1;
    unsigned int checked_didBecomeStreamTask:1;
    unsigned int checked_didReceiveData_withoutCB:1;
    unsigned int checked_didReceiveData_withCB:1;
    unsigned int checked_willCacheResponse:1;
    unsigned int checked__willRetryBackgroundDataTask_withoutError:1;
    unsigned int checked__willRetryBackgroundDataTask_withError:1;
    unsigned int checked_didFinishDownloadingToURL:1;
    unsigned int checked_didWriteData:1;
    unsigned int checked_didResumeAtOffset:1;
    unsigned int checked__didReceiveDownloadResponse:1;
    unsigned int checked__needsDownloadDirectory:1;
    unsigned int checked_readClosed:1;
    unsigned int checked_writeClosed:1;
    unsigned int checked_betterRouteDiscovered:1;
    unsigned int checked_didBecomeInputOutputStream:1;
    unsigned int checked__connectionEstablished:1;
    unsigned int checked_didOpenWithProtocol:1;
    unsigned int checked_didCloseWithCode:1;
    unsigned int accept_sessionDidBecomeInvalidWithError:1;
    unsigned int accept_sessionDidReceiveChallenge:1;
    unsigned int accept_sessionDidFinishEventsForBackgroundURLSession:1;
    unsigned int accept__getAuthHeadersForResponse:1;
    unsigned int accept__sessionOpenFileAtPath:1;
    unsigned int accept_didCreateTask:1;
    unsigned int accept_willBeginDelayedRequest:1;
    unsigned int accept_isWaitingForConnectivity:1;
    unsigned int accept_willPerformHTTPRedirection:1;
    unsigned int accept_didReceiveChallenge:1;
    unsigned int accept_needNewBodyStream:1;
    unsigned int accept_didSendBodyData:1;
    unsigned int accept_didFinishCollectingMetrics:1;
    unsigned int accept_didCompleteWithError:1;
    unsigned int accept__schemeUpgraded:1;
    unsigned int accept__willSendRequestForEstablishedConnection:1;
    unsigned int accept__conditionalRequirementsChanged:1;
    unsigned int accept__didReceiveInformationalResponse:1;
    unsigned int accept__willUseEffectiveConfiguration:1;
    unsigned int accept__isWaitingForConnection_withoutError:1;
    unsigned int accept__isWaitingForConnection_withError:1;
    unsigned int accept__alternatePathAvailable:1;
    unsigned int accept_didReceiveResponse:1;
    unsigned int accept_didBecomeDownloadTask:1;
    unsigned int accept_didBecomeStreamTask:1;
    unsigned int accept_didReceiveData_withoutCB:1;
    unsigned int accept_didReceiveData_withCB:1;
    unsigned int accept_willCacheResponse:1;
    unsigned int accept__willRetryBackgroundDataTask_withoutError:1;
    unsigned int accept__willRetryBackgroundDataTask_withError:1;
    unsigned int accept_didFinishDownloadingToURL:1;
    unsigned int accept_didWriteData:1;
    unsigned int accept_didResumeAtOffset:1;
    unsigned int accept__didReceiveDownloadResponse:1;
    unsigned int accept__needsDownloadDirectory:1;
    unsigned int accept_readClosed:1;
    unsigned int accept_writeClosed:1;
    unsigned int accept_betterRouteDiscovered:1;
    unsigned int accept_didBecomeInputOutputStream:1;
    unsigned int accept__connectionEstablished:1;
    unsigned int accept_didOpenWithProtocol:1;
    unsigned int accept_didCloseWithCode:1;
    __NSCFURLSessionDelegateWrapper *_fallbackDelegateWrapper;
    id _wrappedDelegate;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void).cxx_destruct;

@end

