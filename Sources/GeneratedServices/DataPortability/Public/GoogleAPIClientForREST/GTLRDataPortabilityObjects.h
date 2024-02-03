// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Data Portability API (dataportability/v1beta)
// Description:
//   The Data Portability API lets you build applications that request
//   authorization from a user to move a copy of data from Google services into
//   your application. This enables data portability and facilitates switching
//   services.
// Documentation:
//   https://developers.google.com/data-portability

#import <GoogleAPIClientForREST/GTLRObject.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRDataPortability_PortabilityArchiveState.state

/**
 *  The Takeout job is cancelled.
 *
 *  Value: "CANCELLED"
 */
FOUNDATION_EXTERN NSString * const kGTLRDataPortability_PortabilityArchiveState_State_Cancelled;
/**
 *  The Takeout job is complete.
 *
 *  Value: "COMPLETE"
 */
FOUNDATION_EXTERN NSString * const kGTLRDataPortability_PortabilityArchiveState_State_Complete;
/**
 *  The Takeout job failed.
 *
 *  Value: "FAILED"
 */
FOUNDATION_EXTERN NSString * const kGTLRDataPortability_PortabilityArchiveState_State_Failed;
/**
 *  The Takeout job is in progress.
 *
 *  Value: "IN_PROGRESS"
 */
FOUNDATION_EXTERN NSString * const kGTLRDataPortability_PortabilityArchiveState_State_InProgress;
/**
 *  Default value. This value is unused.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRDataPortability_PortabilityArchiveState_State_StateUnspecified;

/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance: service Foo { rpc
 *  Bar(google.protobuf.Empty) returns (google.protobuf.Empty); }
 */
@interface GTLRDataPortability_Empty : GTLRObject
@end


/**
 *  Request to kick off a Takeout Archive job.
 */
@interface GTLRDataPortability_InitiatePortabilityArchiveRequest : GTLRObject

/**
 *  The resources from which you're exporting data. These values have a 1:1
 *  correspondence with the OAuth scopes.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *resources;

@end


/**
 *  Response from initiating a Take Archive job.
 */
@interface GTLRDataPortability_InitiatePortabilityArchiveResponse : GTLRObject

/**
 *  The archive job ID that is initiated in the Takeout API. This can be used to
 *  get the state of the job.
 */
@property(nonatomic, copy, nullable) NSString *archiveJobId;

@end


/**
 *  Resource that contains the state of a Takeout Archive job.
 */
@interface GTLRDataPortability_PortabilityArchiveState : GTLRObject

/**
 *  The resource name of ArchiveJob's PortabilityArchiveState singleton. The
 *  format is: archiveJobs/{archive_job}/portabilityArchiveState. archive_job is
 *  the job ID provided in the request.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Resource that represents the state of the Takeout Archive job.
 *
 *  Likely values:
 *    @arg @c kGTLRDataPortability_PortabilityArchiveState_State_Cancelled The
 *        Takeout job is cancelled. (Value: "CANCELLED")
 *    @arg @c kGTLRDataPortability_PortabilityArchiveState_State_Complete The
 *        Takeout job is complete. (Value: "COMPLETE")
 *    @arg @c kGTLRDataPortability_PortabilityArchiveState_State_Failed The
 *        Takeout job failed. (Value: "FAILED")
 *    @arg @c kGTLRDataPortability_PortabilityArchiveState_State_InProgress The
 *        Takeout job is in progress. (Value: "IN_PROGRESS")
 *    @arg @c kGTLRDataPortability_PortabilityArchiveState_State_StateUnspecified
 *        Default value. This value is unused. (Value: "STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *state;

/**
 *  If the state is complete, this method returns the signed URLs of the objects
 *  in the Cloud Storage bucket.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *urls;

@end


/**
 *  Request to reset exhausted OAuth scopes.
 */
@interface GTLRDataPortability_ResetAuthorizationRequest : GTLRObject
@end


/**
 *  Request to retry a failed Portability Archive job.
 */
@interface GTLRDataPortability_RetryPortabilityArchiveRequest : GTLRObject
@end


/**
 *  Response from retrying a Portability Archive.
 */
@interface GTLRDataPortability_RetryPortabilityArchiveResponse : GTLRObject

/**
 *  The archive job ID that is initiated by the retry endpoint. This can be used
 *  to get the state of the new job
 */
@property(nonatomic, copy, nullable) NSString *archiveJobId;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop